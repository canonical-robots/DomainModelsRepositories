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
#include "CommObjectRecognitionObjects/CommSymbolDetectorEventParamCore.hh"

// serialization/deserialization operators
//#include "CommObjectRecognitionObjects/CommSymbolDetectorEventParamACE.hh"

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
	const char* CommSymbolDetectorEventParamCore::getCompiledHash()
	{
		return CommObjectRecognitionObjectsIDL::REPO_HASH;
	}
	
	void CommSymbolDetectorEventParamCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommSymbolDetectorEventParamCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommSymbolDetectorEventParamCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommSymbolDetectorEventParamCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.type);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommSymbolDetectorEventParamCore::CommSymbolDetectorEventParamCore()
	:	idl_CommSymbolDetectorEventParam()
	{  
		setType(CommObjectRecognitionObjects::SymbolDetectorEventType());
	}
	
	CommSymbolDetectorEventParamCore::CommSymbolDetectorEventParamCore(const DATATYPE &data)
	:	idl_CommSymbolDetectorEventParam(data)
	{  }

	CommSymbolDetectorEventParamCore::~CommSymbolDetectorEventParamCore()
	{  }
	
	void CommSymbolDetectorEventParamCore::to_ostream(std::ostream &os) const
	{
	  os << "CommSymbolDetectorEventParam(";
	  getType().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommSymbolDetectorEventParamCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<type>";
		getType().to_xml(os, indent);
		os << indent << "</type>";
	}
	
	// restore from xml stream
	void CommSymbolDetectorEventParamCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_type("<type>");
		
		if(kmp_type.search(is)) {
			CommObjectRecognitionObjects::SymbolDetectorEventType typeItem;
			typeItem.from_xml(is);
			setType(typeItem);
		}
	}
	
	/*
	void CommSymbolDetectorEventParamCore::get(ACE_Message_Block *&msg) const
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
		// (see CommSymbolDetectorEventParamACE.hh)
		cdr << idl_CommSymbolDetectorEventParam;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommSymbolDetectorEventParam);
		cdr << data_hash;
		// std::cout << "CommSymbolDetectorEventParamCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommSymbolDetectorEventParamCore::set(const ACE_Message_Block *msg)
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
		// (see CommSymbolDetectorEventParamACE.hh)
		cdr >> idl_CommSymbolDetectorEventParam;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommSymbolDetectorEventParam);
		assert(data_hash == own_hash);
		// std::cout << "CommSymbolDetectorEventParamCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommObjectRecognitionObjects */