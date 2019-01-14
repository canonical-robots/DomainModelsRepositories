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
#include "CommPTUObjects/CommMobilePTUStateCore.hh"

// serialization/deserialization operators
//#include "CommPTUObjects/CommMobilePTUStateACE.hh"

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

namespace CommPTUObjects 
{
	const char* CommMobilePTUStateCore::getCompiledHash()
	{
		return CommPTUObjectsIDL::REPO_HASH;
	}
	
	void CommMobilePTUStateCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommPTUObjects::CommPTUState(idl_CommMobilePTUState.ptu_state)
		CommPTUObjects::CommPTUState::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommBaseState(idl_CommMobilePTUState.base_state)
		CommBasicObjects::CommBaseState::getAllHashValues(hashes);
	}
	
	void CommMobilePTUStateCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommMobilePTUStateCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommPTUObjects::CommPTUState(idl_CommMobilePTUState.ptu_state)
		CommPTUObjects::CommPTUState::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommBaseState(idl_CommMobilePTUState.base_state)
		CommBasicObjects::CommBaseState::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommMobilePTUStateCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += CommPTUObjects::CommPTUState::generateDataHash(data.ptu_state);
		seed += CommBasicObjects::CommBaseState::generateDataHash(data.base_state);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommMobilePTUStateCore::CommMobilePTUStateCore()
	:	idl_CommMobilePTUState()
	{  
		setPtu_state(CommPTUObjects::CommPTUState());
		setBase_state(CommBasicObjects::CommBaseState());
	}
	
	CommMobilePTUStateCore::CommMobilePTUStateCore(const DATATYPE &data)
	:	idl_CommMobilePTUState(data)
	{  }

	CommMobilePTUStateCore::~CommMobilePTUStateCore()
	{  }
	
	void CommMobilePTUStateCore::to_ostream(std::ostream &os) const
	{
	  os << "CommMobilePTUState(";
	  getPtu_state().to_ostream(os);
	  getBase_state().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommMobilePTUStateCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<ptu_state>";
		getPtu_state().to_xml(os, indent);
		os << indent << "</ptu_state>";
		os << indent << "<base_state>";
		getBase_state().to_xml(os, indent);
		os << indent << "</base_state>";
	}
	
	// restore from xml stream
	void CommMobilePTUStateCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_ptu_state("<ptu_state>");
		static const Smart::KnuthMorrisPratt kmp_base_state("<base_state>");
		
		if(kmp_ptu_state.search(is)) {
			CommPTUObjects::CommPTUState ptu_stateItem;
			ptu_stateItem.from_xml(is);
			setPtu_state(ptu_stateItem);
		}
		if(kmp_base_state.search(is)) {
			CommBasicObjects::CommBaseState base_stateItem;
			base_stateItem.from_xml(is);
			setBase_state(base_stateItem);
		}
	}
	
	/*
	void CommMobilePTUStateCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommPTUObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommPTUObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommMobilePTUStateACE.hh)
		cdr << idl_CommMobilePTUState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommMobilePTUState);
		cdr << data_hash;
		// std::cout << "CommMobilePTUStateCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommMobilePTUStateCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommPTUObjectsIDL::HashList hashes;
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
		// (see CommMobilePTUStateACE.hh)
		cdr >> idl_CommMobilePTUState;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommMobilePTUState);
		assert(data_hash == own_hash);
		// std::cout << "CommMobilePTUStateCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommPTUObjects */