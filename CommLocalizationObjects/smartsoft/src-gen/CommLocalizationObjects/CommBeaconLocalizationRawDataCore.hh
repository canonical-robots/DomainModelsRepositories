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
#ifndef COMMLOCALIZATIONOBJECTS_COMMBEACONLOCALIZATIONRAWDATA_CORE_H_
#define COMMLOCALIZATIONOBJECTS_COMMBEACONLOCALIZATIONRAWDATA_CORE_H_

#include "CommLocalizationObjects/CommBeaconLocalizationRawDataData.hh"
#include "CommLocalizationObjects/CommBeaconMeasurement.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommLocalizationObjects {
	
class CommBeaconLocalizationRawDataCore {
protected:
	// data structure
	CommLocalizationObjectsIDL::CommBeaconLocalizationRawData idl_CommBeaconLocalizationRawData;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommLocalizationObjectsIDL::CommBeaconLocalizationRawData DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommBeaconLocalizationRawDataCore();
	CommBeaconLocalizationRawDataCore(const DATATYPE &data);
	// default destructor
	virtual ~CommBeaconLocalizationRawDataCore();
	
	const DATATYPE& get() const { return idl_CommBeaconLocalizationRawData; }
	operator const DATATYPE&() const { return idl_CommBeaconLocalizationRawData; }
	DATATYPE& set() { return idl_CommBeaconLocalizationRawData; }

	static inline std::string identifier(void) { return "CommLocalizationObjects::CommBeaconLocalizationRawData"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Measurements
	/**
	 * Getter methods for element idl_CommBeaconLocalizationRawData.measurements of type vector<CommLocalizationObjects::CommBeaconMeasurement>
	 */
	inline std::vector<CommLocalizationObjects::CommBeaconMeasurement> getMeasurementsCopy() const { 
		return std::vector<CommLocalizationObjects::CommBeaconMeasurement>(idl_CommBeaconLocalizationRawData.measurements.begin(), idl_CommBeaconLocalizationRawData.measurements.end());
	}
	inline CommLocalizationObjects::CommBeaconMeasurement getMeasurementsElemAtPos(const size_t &pos) const {
		return CommLocalizationObjects::CommBeaconMeasurement(idl_CommBeaconLocalizationRawData.measurements[pos]);
	}
	inline size_t getMeasurementsSize() const { return idl_CommBeaconLocalizationRawData.measurements.size(); }
	inline bool isMeasurementsEmpty() const { return idl_CommBeaconLocalizationRawData.measurements.empty(); }
	/**
	 * Setter methods for idl_CommBeaconLocalizationRawData.measurements of type vector<CommLocalizationObjects::CommBeaconMeasurement>
	 */
	inline CommBeaconLocalizationRawDataCore& setMeasurements(const std::vector<CommLocalizationObjects::CommBeaconMeasurement> &measurements) { 
		idl_CommBeaconLocalizationRawData.measurements.assign(measurements.begin(), measurements.end());
		return *this;
	}
	inline bool setMeasurementsElemAtPos(const size_t &pos, const CommLocalizationObjects::CommBeaconMeasurement &elem) {
		if(pos < idl_CommBeaconLocalizationRawData.measurements.size()) {
			idl_CommBeaconLocalizationRawData.measurements[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertMeasurementsVectorAtPos(const size_t &pos, const std::vector<CommLocalizationObjects::CommBeaconMeasurement> &data) {
		if(pos < idl_CommBeaconLocalizationRawData.measurements.size()) {
			idl_CommBeaconLocalizationRawData.measurements.insert(idl_CommBeaconLocalizationRawData.measurements.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeMeasurements(const size_t &size) { idl_CommBeaconLocalizationRawData.measurements.resize(size); }
	inline bool eraseMeasurementsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommBeaconLocalizationRawData.measurements.size() ) {
			idl_CommBeaconLocalizationRawData.measurements.erase(idl_CommBeaconLocalizationRawData.measurements.begin()+pos, idl_CommBeaconLocalizationRawData.measurements.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearMeasurements() { idl_CommBeaconLocalizationRawData.measurements.clear(); }
};

} /* namespace CommLocalizationObjects */
#endif /* COMMLOCALIZATIONOBJECTS_COMMBEACONLOCALIZATIONRAWDATA_CORE_H_ */