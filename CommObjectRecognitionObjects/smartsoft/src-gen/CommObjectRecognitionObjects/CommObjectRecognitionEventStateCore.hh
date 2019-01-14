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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONEVENTSTATE_CORE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONEVENTSTATE_CORE_H_

#include "CommObjectRecognitionObjects/CommObjectRecognitionEventStateData.hh"
#include "CommObjectRecognitionObjects/enumObjectRecognitionState.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommObjectRecognitionObjects {
	
class CommObjectRecognitionEventStateCore {
protected:
	// data structure
	CommObjectRecognitionObjectsIDL::CommObjectRecognitionEventState idl_CommObjectRecognitionEventState;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommObjectRecognitionObjectsIDL::CommObjectRecognitionEventState DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommObjectRecognitionEventStateCore();
	CommObjectRecognitionEventStateCore(const DATATYPE &data);
	// default destructor
	virtual ~CommObjectRecognitionEventStateCore();
	
	const DATATYPE& get() const { return idl_CommObjectRecognitionEventState; }
	operator const DATATYPE&() const { return idl_CommObjectRecognitionEventState; }
	DATATYPE& set() { return idl_CommObjectRecognitionEventState; }

	static inline std::string identifier(void) { return "CommObjectRecognitionObjects::CommObjectRecognitionEventState"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element State
	inline CommObjectRecognitionObjects::ObjectRecognitionState getState() const { return CommObjectRecognitionObjects::ObjectRecognitionState(idl_CommObjectRecognitionEventState.state); }
	inline CommObjectRecognitionEventStateCore& setState(const CommObjectRecognitionObjects::ObjectRecognitionState &state) { idl_CommObjectRecognitionEventState.state = state; return *this; }
	
	// getter and setter for element Object_id
	/**
	 * Getter methods for idl_CommObjectRecognitionEventState.object_id of type vector<unsigned int>
	 */
	inline std::vector<unsigned int>& getObject_idRef() { return idl_CommObjectRecognitionEventState.object_id; }
	inline std::vector<unsigned int> getObject_idCopy() const {
		return std::vector<unsigned int>(idl_CommObjectRecognitionEventState.object_id.begin(), idl_CommObjectRecognitionEventState.object_id.end());
	}
	inline unsigned int getObject_idElemAtPos(const size_t &pos) const { return idl_CommObjectRecognitionEventState.object_id[pos]; }
	inline size_t getObject_idSize() const { return idl_CommObjectRecognitionEventState.object_id.size(); }
	inline bool isObject_idEmpty() const { return idl_CommObjectRecognitionEventState.object_id.empty(); }
	/**
	 * Setter methods for idl_CommObjectRecognitionEventState.object_id of type vector<unsigned int>
	 */
	inline CommObjectRecognitionEventStateCore& setObject_id(const std::vector<unsigned int> &object_id) { idl_CommObjectRecognitionEventState.object_id = object_id; return *this; }
	inline bool setObject_idElemAtPos(const size_t &pos, const unsigned int &elem) {
		if(pos < idl_CommObjectRecognitionEventState.object_id.size()) {
			idl_CommObjectRecognitionEventState.object_id[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertObject_idVectorAtPos(const size_t &pos, const std::vector<unsigned int> &data) {
		if(pos < idl_CommObjectRecognitionEventState.object_id.size()) {
			idl_CommObjectRecognitionEventState.object_id.insert(idl_CommObjectRecognitionEventState.object_id.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeObject_id(const size_t &size) { idl_CommObjectRecognitionEventState.object_id.resize(size); }
	inline bool eraseObject_idElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommObjectRecognitionEventState.object_id.size() ) {
			idl_CommObjectRecognitionEventState.object_id.erase(idl_CommObjectRecognitionEventState.object_id.begin()+pos, idl_CommObjectRecognitionEventState.object_id.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearObject_id() { idl_CommObjectRecognitionEventState.object_id.clear(); }
};

} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONEVENTSTATE_CORE_H_ */