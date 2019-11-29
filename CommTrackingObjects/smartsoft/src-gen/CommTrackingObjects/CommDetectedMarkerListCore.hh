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
#ifndef COMMTRACKINGOBJECTS_COMMDETECTEDMARKERLIST_CORE_H_
#define COMMTRACKINGOBJECTS_COMMDETECTEDMARKERLIST_CORE_H_

#include "CommTrackingObjects/CommDetectedMarkerListData.hh"
#include "CommBasicObjects/CommPose3d.hh"
#include "CommBasicObjects/CommBaseState.hh"
#include "CommTrackingObjects/CommDetectedMarker.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommTrackingObjects {
	
class CommDetectedMarkerListCore {
protected:
	// data structure
	CommTrackingObjectsIDL::CommDetectedMarkerList idl_CommDetectedMarkerList;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommTrackingObjectsIDL::CommDetectedMarkerList DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommDetectedMarkerListCore();
	CommDetectedMarkerListCore(const DATATYPE &data);
	// default destructor
	virtual ~CommDetectedMarkerListCore();
	
	const DATATYPE& get() const { return idl_CommDetectedMarkerList; }
	operator const DATATYPE&() const { return idl_CommDetectedMarkerList; }
	DATATYPE& set() { return idl_CommDetectedMarkerList; }

	static inline std::string identifier(void) { return "CommTrackingObjects::CommDetectedMarkerList"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Markers
	/**
	 * Getter methods for element idl_CommDetectedMarkerList.markers of type vector<CommTrackingObjects::CommDetectedMarker>
	 */
	inline std::vector<CommTrackingObjects::CommDetectedMarker> getMarkersCopy() const { 
		return std::vector<CommTrackingObjects::CommDetectedMarker>(idl_CommDetectedMarkerList.markers.begin(), idl_CommDetectedMarkerList.markers.end());
	}
	inline CommTrackingObjects::CommDetectedMarker getMarkersElemAtPos(const size_t &pos) const {
		return CommTrackingObjects::CommDetectedMarker(idl_CommDetectedMarkerList.markers[pos]);
	}
	inline size_t getMarkersSize() const { return idl_CommDetectedMarkerList.markers.size(); }
	inline bool isMarkersEmpty() const { return idl_CommDetectedMarkerList.markers.empty(); }
	/**
	 * Setter methods for idl_CommDetectedMarkerList.markers of type vector<CommTrackingObjects::CommDetectedMarker>
	 */
	inline CommDetectedMarkerListCore& setMarkers(const std::vector<CommTrackingObjects::CommDetectedMarker> &markers) { 
		idl_CommDetectedMarkerList.markers.assign(markers.begin(), markers.end());
		return *this;
	}
	inline bool setMarkersElemAtPos(const size_t &pos, const CommTrackingObjects::CommDetectedMarker &elem) {
		if(pos < idl_CommDetectedMarkerList.markers.size()) {
			idl_CommDetectedMarkerList.markers[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertMarkersVectorAtPos(const size_t &pos, const std::vector<CommTrackingObjects::CommDetectedMarker> &data) {
		if(pos < idl_CommDetectedMarkerList.markers.size()) {
			idl_CommDetectedMarkerList.markers.insert(idl_CommDetectedMarkerList.markers.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeMarkers(const size_t &size) { idl_CommDetectedMarkerList.markers.resize(size); }
	inline bool eraseMarkersElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDetectedMarkerList.markers.size() ) {
			idl_CommDetectedMarkerList.markers.erase(idl_CommDetectedMarkerList.markers.begin()+pos, idl_CommDetectedMarkerList.markers.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearMarkers() { idl_CommDetectedMarkerList.markers.clear(); }
	
	// getter and setter for element Sensor_pose
	inline CommBasicObjects::CommPose3d getSensor_pose() const { return CommBasicObjects::CommPose3d(idl_CommDetectedMarkerList.sensor_pose); }
	inline CommDetectedMarkerListCore& setSensor_pose(const CommBasicObjects::CommPose3d &sensor_pose) { idl_CommDetectedMarkerList.sensor_pose = sensor_pose; return *this; }
	
	// getter and setter for element Base_state
	inline CommBasicObjects::CommBaseState getBase_state() const { return CommBasicObjects::CommBaseState(idl_CommDetectedMarkerList.base_state); }
	inline CommDetectedMarkerListCore& setBase_state(const CommBasicObjects::CommBaseState &base_state) { idl_CommDetectedMarkerList.base_state = base_state; return *this; }
	
	// getter and setter for element Valid
	inline bool getValid() const { return idl_CommDetectedMarkerList.valid; }
	inline CommDetectedMarkerListCore& setValid(const bool &valid) { idl_CommDetectedMarkerList.valid = valid; return *this; }
};

} /* namespace CommTrackingObjects */
#endif /* COMMTRACKINGOBJECTS_COMMDETECTEDMARKERLIST_CORE_H_ */
