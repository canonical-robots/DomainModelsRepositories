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
#include "CommBasicObjects/CommAnalogOutputRequestCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommAnalogOutputRequestACE.hh"

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

namespace CommBasicObjects 
{
	const char* CommAnalogOutputRequestCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommAnalogOutputRequestCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommAnalogOutputRequestCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommAnalogOutputRequestCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommAnalogOutputRequestCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.outputNumber);
		boost::hash_combine(seed, data.outputValue);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommAnalogOutputRequestCore::CommAnalogOutputRequestCore()
	:	idl_CommAnalogOutputRequest()
	{  
		setOutputNumber(0);
		setOutputValue(0.0);
	}
	
	CommAnalogOutputRequestCore::CommAnalogOutputRequestCore(const DATATYPE &data)
	:	idl_CommAnalogOutputRequest(data)
	{  }

	CommAnalogOutputRequestCore::~CommAnalogOutputRequestCore()
	{  }
	
	void CommAnalogOutputRequestCore::to_ostream(std::ostream &os) const
	{
	  os << "CommAnalogOutputRequest(";
	  os << getOutputNumber() << " ";
	  os << getOutputValue() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommAnalogOutputRequestCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<outputNumber>" << getOutputNumber() << "</outputNumber>";
		os << indent << "<outputValue>" << getOutputValue() << "</outputValue>";
	}
	
	// restore from xml stream
	void CommAnalogOutputRequestCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_outputNumber("<outputNumber>");
		static const Smart::KnuthMorrisPratt kmp_outputValue("<outputValue>");
		
		if(kmp_outputNumber.search(is)) {
			unsigned int outputNumberItem;
			is >> outputNumberItem;
			setOutputNumber(outputNumberItem);
		}
		if(kmp_outputValue.search(is)) {
			double outputValueItem;
			is >> outputValueItem;
			setOutputValue(outputValueItem);
		}
	}
	
	/*
	void CommAnalogOutputRequestCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommAnalogOutputRequestACE.hh)
		cdr << idl_CommAnalogOutputRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommAnalogOutputRequest);
		cdr << data_hash;
		// std::cout << "CommAnalogOutputRequestCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommAnalogOutputRequestCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
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
		// (see CommAnalogOutputRequestACE.hh)
		cdr >> idl_CommAnalogOutputRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommAnalogOutputRequest);
		assert(data_hash == own_hash);
		// std::cout << "CommAnalogOutputRequestCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
