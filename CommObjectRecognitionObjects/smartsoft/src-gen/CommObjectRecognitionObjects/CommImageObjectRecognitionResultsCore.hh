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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULTS_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULTS_CORE_H_

#include "CommObjectRecognitionObjects/CommImageObjectRecognitionResultsData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"
#include "CommObjectRecognitionObjects/CommImageObjectRecognitionResult.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class CommImageObjectRecognitionResultsCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResults idl_CommImageObjectRecognitionResults;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::CommImageObjectRecognitionResults DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommImageObjectRecognitionResultsCore();
	CommImageObjectRecognitionResultsCore(const DATATYPE &data);
	// default destructor
	virtual ~CommImageObjectRecognitionResultsCore();
	
	const DATATYPE& get() const { return idl_CommImageObjectRecognitionResults; }
	operator const DATATYPE&() const { return idl_CommImageObjectRecognitionResults; }
	DATATYPE& set() { return idl_CommImageObjectRecognitionResults; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::CommImageObjectRecognitionResults"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Objects
	/**
	 * Getter methods for element idl_CommImageObjectRecognitionResults.objects of type vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult>
	 */
	inline std::vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult> getObjectsCopy() const { 
		return std::vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult>(idl_CommImageObjectRecognitionResults.objects.begin(), idl_CommImageObjectRecognitionResults.objects.end());
	}
	inline CommObjectRecognitionObjects::CommImageObjectRecognitionResult getObjectsElemAtPos(const size_t &pos) const {
		return CommObjectRecognitionObjects::CommImageObjectRecognitionResult(idl_CommImageObjectRecognitionResults.objects[pos]);
	}
	inline size_t getObjectsSize() const { return idl_CommImageObjectRecognitionResults.objects.size(); }
	inline bool isObjectsEmpty() const { return idl_CommImageObjectRecognitionResults.objects.empty(); }
	/**
	 * Setter methods for idl_CommImageObjectRecognitionResults.objects of type vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult>
	 */
	inline CommImageObjectRecognitionResultsCore& setObjects(const std::vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult> &objects) { 
		idl_CommImageObjectRecognitionResults.objects.assign(objects.begin(), objects.end());
		return *this;
	}
	inline bool setObjectsElemAtPos(const size_t &pos, const CommObjectRecognitionObjects::CommImageObjectRecognitionResult &elem) {
		if(pos < idl_CommImageObjectRecognitionResults.objects.size()) {
			idl_CommImageObjectRecognitionResults.objects[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertObjectsVectorAtPos(const size_t &pos, const std::vector<CommObjectRecognitionObjects::CommImageObjectRecognitionResult> &data) {
		if(pos < idl_CommImageObjectRecognitionResults.objects.size()) {
			idl_CommImageObjectRecognitionResults.objects.insert(idl_CommImageObjectRecognitionResults.objects.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeObjects(const size_t &size) { idl_CommImageObjectRecognitionResults.objects.resize(size); }
	inline bool eraseObjectsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommImageObjectRecognitionResults.objects.size() ) {
			idl_CommImageObjectRecognitionResults.objects.erase(idl_CommImageObjectRecognitionResults.objects.begin()+pos, idl_CommImageObjectRecognitionResults.objects.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearObjects() { idl_CommImageObjectRecognitionResults.objects.clear(); }
	
	// getter and setter for element Timestamp
	inline CommBasicObjects::CommTimeStamp getTimestamp() const { return CommBasicObjects::CommTimeStamp(idl_CommImageObjectRecognitionResults.timestamp); }
	inline CommImageObjectRecognitionResultsCore& setTimestamp(const CommBasicObjects::CommTimeStamp &timestamp) { idl_CommImageObjectRecognitionResults.timestamp = timestamp; return *this; }
	
	// getter and setter for element EnvironmentId
	inline unsigned int getEnvironmentId() const { return idl_CommImageObjectRecognitionResults.environmentId; }
	inline CommImageObjectRecognitionResultsCore& setEnvironmentId(const unsigned int &environmentId) { idl_CommImageObjectRecognitionResults.environmentId = environmentId; return *this; }
	
	// getter and setter for element Valid
	inline bool getValid() const { return idl_CommImageObjectRecognitionResults.valid; }
	inline CommImageObjectRecognitionResultsCore& setValid(const bool &valid) { idl_CommImageObjectRecognitionResults.valid = valid; return *this; }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMIMAGEOBJECTRECOGNITIONRESULTS_CORE_H_ */
