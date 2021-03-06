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
#include "CommObjectRecognitionObjects/SimpleObjectEventStateCore.hh"

// serialization/deserialization operators
//#include "CommObjectRecognitionObjects/SimpleObjectEventStateACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommObjectRecognitionObjects 
{
	const char* SimpleObjectEventStateCore::getCompiledHash()
	{
		return CommObjectRecognitionObjectsIDL::REPO_HASH;
	}
	
	void SimpleObjectEventStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void SimpleObjectEventStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "SimpleObjectEventStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t SimpleObjectEventStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.newState);
		boost::hash_combine(seed, data.x);
		boost::hash_combine(seed, data.y);
		
		return seed;
	}
	#endif
	
	// default constructor
	SimpleObjectEventStateCore::SimpleObjectEventStateCore()
	:	idl_SimpleObjectEventState()
	{  
		setNewState(CommObjectRecognitionObjects::SimpleObjectState());
		setX(0);
		setY(0);
	}
	
	SimpleObjectEventStateCore::SimpleObjectEventStateCore(const DATATYPE &data)
	:	idl_SimpleObjectEventState(data)
	{  }

	SimpleObjectEventStateCore::~SimpleObjectEventStateCore()
	{  }
	
	void SimpleObjectEventStateCore::to_ostream(std::ostream &os) const
	{
	  os << "SimpleObjectEventState(";
	  getNewState().to_ostream(os);
	  os << getX() << " ";
	  os << getY() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void SimpleObjectEventStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<newState>";
		getNewState().to_xml(os, indent);
		os << indent << "</newState>";
		os << indent << "<x>" << getX() << "</x>";
		os << indent << "<y>" << getY() << "</y>";
	}
	
	// restore from xml stream
	void SimpleObjectEventStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_newState("<newState>");
		static const Smart::KnuthMorrisPratt kmp_x("<x>");
		static const Smart::KnuthMorrisPratt kmp_y("<y>");
		
		if(kmp_newState.search(is)) {
			CommObjectRecognitionObjects::SimpleObjectState newStateItem;
			newStateItem.from_xml(is);
			setNewState(newStateItem);
		}
		if(kmp_x.search(is)) {
			int xItem;
			is >> xItem;
			setX(xItem);
		}
		if(kmp_y.search(is)) {
			int yItem;
			is >> yItem;
			setY(yItem);
		}
	}
	
	/*
	void SimpleObjectEventStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommObjectRecognitionObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommObjectRecognitionObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see SimpleObjectEventStateACE.hh)
		cdr << idl_SimpleObjectEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_SimpleObjectEventState);
		cdr << data_hash;
		// std::cout << "SimpleObjectEventStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void SimpleObjectEventStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommObjectRecognitionObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see SimpleObjectEventStateACE.hh)
		cdr >> idl_SimpleObjectEventState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_SimpleObjectEventState);
		assert(data_hash == own_hash);
		// std::cout << "SimpleObjectEventStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommObjectRecognitionObjects */
