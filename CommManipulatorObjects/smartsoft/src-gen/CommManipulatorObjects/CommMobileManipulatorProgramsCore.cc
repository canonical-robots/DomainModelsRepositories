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
#include "CommManipulatorObjects/CommMobileManipulatorProgramsCore.hh"

// serialization/deserialization operators
//#include "CommManipulatorObjects/CommMobileManipulatorProgramsACE.hh"

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

namespace CommManipulatorObjects 
{
	const char* CommMobileManipulatorProgramsCore::getCompiledHash()
	{
		return CommManipulatorObjectsIDL::REPO_HASH;
	}
	
	void CommMobileManipulatorProgramsCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
	}
	
	void CommMobileManipulatorProgramsCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommMobileManipulatorProgramsCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
	}
	
	#ifdef ENABLE_HASH
	size_t CommMobileManipulatorProgramsCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		std::vector<ACE_CString>::const_iterator data_namesIt;
		for(data_namesIt=data.names.begin(); data_namesIt!=data.names.end(); data_namesIt++) {
			boost::hash_combine(seed, std::string(data_namesIt->c_str()));
		}
		boost::hash_combine(seed, data.isValid);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommMobileManipulatorProgramsCore::CommMobileManipulatorProgramsCore()
	:	idl_CommMobileManipulatorPrograms()
	{  
		setNames(std::vector<std::string>());
		setIsValid(false);
	}
	
	CommMobileManipulatorProgramsCore::CommMobileManipulatorProgramsCore(const DATATYPE &data)
	:	idl_CommMobileManipulatorPrograms(data)
	{  }

	CommMobileManipulatorProgramsCore::~CommMobileManipulatorProgramsCore()
	{  }
	
	void CommMobileManipulatorProgramsCore::to_ostream(std::ostream &os) const
	{
	  os << "CommMobileManipulatorPrograms(";
	  std::vector<std::string>::const_iterator namesIt;
	  std::vector<std::string> namesList = getNamesCopy();
	  for(namesIt=namesList.begin(); namesIt!=namesList.end(); namesIt++) {
	  	os << *namesIt << " ";
	  }
	  os << getIsValid() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void CommMobileManipulatorProgramsCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		std::vector<std::string>::const_iterator namesIt;
		std::vector<std::string> namesList = getNamesCopy();
		counter = 0;
		os << indent << "<namesList n=\"" << namesList.size() << "\">";
		for(namesIt=namesList.begin(); namesIt!=namesList.end(); namesIt++) {
			os << indent << "<names i=\"" << counter++ << "\">" << *namesIt << "</names>";
		}
		os << indent << "</namesList>";
		os << indent << "<isValid>" << getIsValid() << "</isValid>";
	}
	
	// restore from xml stream
	void CommMobileManipulatorProgramsCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_namesList("<namesList n=\"");
		static const Smart::KnuthMorrisPratt kmp_names("\">");
		static const Smart::KnuthMorrisPratt kmp_isValid("<isValid>");
		
		if(kmp_namesList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			std::string namesItem;
			std::vector<std::string> namesList;
			kmp_names.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_names.search(is)) {
					is >> namesItem;
					namesList.push_back(namesItem);
				}
			}
			setNames(namesList);
		}
		if(kmp_isValid.search(is)) {
			bool isValidItem;
			is >> isValidItem;
			setIsValid(isValidItem);
		}
	}
	
	/*
	void CommMobileManipulatorProgramsCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommManipulatorObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommManipulatorObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommMobileManipulatorProgramsACE.hh)
		cdr << idl_CommMobileManipulatorPrograms;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommMobileManipulatorPrograms);
		cdr << data_hash;
		// std::cout << "CommMobileManipulatorProgramsCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommMobileManipulatorProgramsCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommManipulatorObjectsIDL::HashList hashes;
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
		// (see CommMobileManipulatorProgramsACE.hh)
		cdr >> idl_CommMobileManipulatorPrograms;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommMobileManipulatorPrograms);
		assert(data_hash == own_hash);
		// std::cout << "CommMobileManipulatorProgramsCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommManipulatorObjects */